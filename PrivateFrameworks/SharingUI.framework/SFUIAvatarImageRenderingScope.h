
@interface SFUIAvatarImageRenderingScope : NSObject {
    <CNAvatarImageRenderingScope> * _scope;
}

@property (nonatomic, retain) <CNAvatarImageRenderingScope> *scope;

+ (id)scopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4 backgroundStyle:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)scope;
- (void)setScope:(id)arg1;

@end
