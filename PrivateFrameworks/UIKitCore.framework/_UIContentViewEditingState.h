
@interface _UIContentViewEditingState : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _proposedReplacementRange;
    NSString * _proposedReplacementText;
    NSString * _text;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } proposedReplacementRange;
@property (nonatomic, readonly) NSString *proposedReplacementText;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 proposedReplacementText:(id)arg2 proposedReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })proposedReplacementRange;
- (id)proposedReplacementText;
- (id)text;

@end
