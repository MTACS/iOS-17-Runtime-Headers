
@interface UIKeyboardTaskEntry : NSObject <NSCopying> {
    NSArray * __creationStack;
    id /* block */  __task;
}

@property (nonatomic, readonly, retain) NSArray *originatingStack;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)execute:(id)arg1;
- (id)initWithTask:(id /* block */)arg1;
- (id)originatingStack;

@end
