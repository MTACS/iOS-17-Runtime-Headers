
@interface MSDMapAnnotation : NSObject <MKAnnotation> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    MSDStoreInfo * _storeInfo;
    NSString * _title;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSDStoreInfo *storeInfo;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)initWithStoreInfo:(id)arg1;
- (bool)isSameLocation:(id)arg1;
- (id)storeInfo;
- (id)title;

@end
