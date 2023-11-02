
@interface UPSpan : NSObject {
    NSString * _category;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    SIRINLUEXTERNALUsoGraph * _sharedEntityGraph;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *category;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) SIRINLUEXTERNALUsoGraph *sharedEntityGraph;
@property (readonly) unsigned long long type;

+ (unsigned long long)_getSpanTypeFromProtobufSpan:(id)arg1;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (id)initWithProtobufSpan:(id)arg1 nonWhitespaceTokenIndexes:(id)arg2 error:(id*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(unsigned long long)arg2 category:(id)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(unsigned long long)arg2 category:(id)arg3 sharedEntityGraph:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)sharedEntityGraph;
- (unsigned long long)type;

@end
