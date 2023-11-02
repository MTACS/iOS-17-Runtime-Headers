
@interface _SFCommandRecognizerInterpretation : NSObject {
    NSArray * _arguments;
    NSString * _commandIdentifier;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSSet * _suiteIdentifiers;
    NSIndexSet * _verbIndexes;
}

@property (nonatomic, readonly, copy) NSArray *arguments;
@property (nonatomic, readonly, copy) NSString *commandIdentifier;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly, copy) NSSet *suiteIdentifiers;
@property (nonatomic, readonly, copy) NSIndexSet *verbIndexes;

- (void).cxx_destruct;
- (id)arguments;
- (id)commandIdentifier;
- (id)initWithCommandIdentifier:(id)arg1 suiteIdentifiers:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 verbIndexes:(id)arg4 arguments:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)suiteIdentifiers;
- (id)verbIndexes;

@end
