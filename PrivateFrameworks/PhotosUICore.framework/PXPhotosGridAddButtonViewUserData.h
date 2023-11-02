
@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData> {
    id /* block */  _actionHandler;
    double  _cornerRadius;
    long long  _preferredUserInterfaceStyle;
    long long  _style;
}

@property (nonatomic, readonly, copy) id /* block */ actionHandler;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStyle:(long long)arg1 actionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)setCornerRadius:(double)arg1;
- (void)setPreferredUserInterfaceStyle:(long long)arg1;
- (long long)style;

@end
