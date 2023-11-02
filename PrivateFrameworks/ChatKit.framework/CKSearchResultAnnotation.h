
@interface CKSearchResultAnnotation : NSObject <MKAnnotation> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
