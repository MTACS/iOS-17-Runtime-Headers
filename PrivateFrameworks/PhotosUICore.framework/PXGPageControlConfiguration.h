
@interface PXGPageControlConfiguration : NSObject <PXGViewUserData> {
    SEL  _action;
    long long  _currentPage;
    bool  _hidesForSinglePage;
    long long  _numberOfPages;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) long long currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesForSinglePage;
@property (nonatomic) long long numberOfPages;
@property (readonly) Class superclass;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentPage;
- (unsigned long long)hash;
- (bool)hidesForSinglePage;
- (bool)isEqual:(id)arg1;
- (long long)numberOfPages;
- (void)setAction:(SEL)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setHidesForSinglePage:(bool)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
