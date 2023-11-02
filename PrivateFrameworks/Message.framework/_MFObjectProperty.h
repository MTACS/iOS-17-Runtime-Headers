
@interface _MFObjectProperty : NSObject {
    Class  _class;
    SEL  _property;
}

@property (nonatomic) Class class;
@property (nonatomic) SEL property;

+ (id)objectPropertyWithClass:(Class)arg1 property:(SEL)arg2;

- (Class)class;
- (SEL)property;
- (void)setClass:(Class)arg1;
- (void)setProperty:(SEL)arg1;

@end
