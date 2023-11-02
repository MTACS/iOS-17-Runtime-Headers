
@interface PKDynamicAssetIndex : NSObject {
    NSDate * _dateCreated;
    NSDictionary * _index;
}

@property (nonatomic, readonly) NSDate *dateCreated;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)description;
- (id)initWithContentsOfURL:(id)arg1;
- (id)mappedAssetIdentifier:(id)arg1;
- (id)mappedStringIdentifier:(id)arg1;

@end
