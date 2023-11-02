
@interface HPSEngravingService : NSObject {
    BTSDevice * _device;
    NSString * _engravingData;
}

- (void).cxx_destruct;
- (id)getEngravedCaseView;
- (id)initWithDevice:(id)arg1;
- (bool)isEngravingSupported;

@end
