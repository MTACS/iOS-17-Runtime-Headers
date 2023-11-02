
@interface PXGViewPayload : NSObject <NSCopying> {
    <PXGViewUserData> * _userData;
    Class  _viewClass;
}

@property (nonatomic, readonly, copy) <PXGViewUserData> *userData;
@property (nonatomic, readonly) Class viewClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithViewClass:(Class)arg1 userData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)userData;
- (Class)viewClass;

@end
