
@interface ECMappingInfo : NSObject {
    NSString * mSheetName;
}

@property (nonatomic, readonly) int columnOffset;
@property (nonatomic, readonly) int rowOffset;
@property (nonatomic, readonly) NSString *sheetName;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (void).cxx_destruct;
- (int)columnOffset;
- (id)initWithSheetName:(id)arg1;
- (int)rowOffset;
- (id)sheetName;

@end
