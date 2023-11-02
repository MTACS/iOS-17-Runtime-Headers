
@interface PGSharingRecord : NSObject <NSSecureCoding> {
    PHAsset * _asset;
    NSString * _assetLocalIdentifier;
    NSDate * _date;
    NSString * _momentLocalIdentifier;
    NSArray * _persons;
    unsigned long long  _type;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) NSString *assetLocalIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, retain) NSString *momentLocalIdentifier;
@property (nonatomic, readonly) NSArray *persons;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asset;
- (id)assetLocalIdentifier;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 asset:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 assetLocalIdentifier:(id)arg5;
- (id)momentLocalIdentifier;
- (id)persons;
- (void)prepareForPersistence;
- (void)setAsset:(id)arg1;
- (void)setMomentLocalIdentifier:(id)arg1;
- (unsigned long long)type;

@end
