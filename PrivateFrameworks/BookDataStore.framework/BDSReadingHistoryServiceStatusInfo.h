
@interface BDSReadingHistoryServiceStatusInfo : NSObject <NSCopying, NSSecureCoding> {
    BDSReadingHistoryServiceStatus * _status;
}

@property (nonatomic, readonly) bool isLoaded;
@property (nonatomic, readonly) BDSReadingHistoryServiceStatus *status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsLoaded:(bool)arg1;
- (bool)isLoaded;
- (id)status;

@end
