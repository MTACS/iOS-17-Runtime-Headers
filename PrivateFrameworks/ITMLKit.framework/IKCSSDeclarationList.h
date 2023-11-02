
@interface IKCSSDeclarationList : NSObject <NSCopying> {
    IKMutableArray * _declarations;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (void)addDeclaration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)declarationAtIndex:(unsigned long long)arg1;
- (id)declarations;
- (id)description;
- (id)firstDeclaration;
- (id)init;
- (id)lastDeclaration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
