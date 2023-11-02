
@interface WDStoredDataCategory : NSObject {
    HKDisplayCategory * _category;
    NSMutableArray * _displayTypes;
}

@property (retain) HKDisplayCategory *category;
@property (nonatomic, readonly) NSMutableArray *displayTypes;

- (void).cxx_destruct;
- (id)category;
- (id)displayTypes;
- (void)setCategory:(id)arg1;

@end
