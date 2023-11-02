
@interface TUMetadataDestinationID : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
}

@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *isoCountryCode;

+ (id)metadataDestinationIDForCall:(id)arg1;
+ (id)metadataDestinationIDsForCHRecentCall:(id)arg1;
+ (id)metadataDestinationIDsForCHRecentCalls:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2;
- (id)initWithHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetadataDestinationID:(id)arg1;
- (id)isoCountryCode;

@end
