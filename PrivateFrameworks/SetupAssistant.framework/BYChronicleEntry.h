
@interface BYChronicleEntry : NSObject {
    NSString * _productVersion;
}

@property (nonatomic, retain) NSString *productVersion;

- (void).cxx_destruct;
- (bool)createdOnCurrentMajorVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProductVersion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntry:(id)arg1;
- (id)productVersion;
- (void)setProductVersion:(id)arg1;

@end
