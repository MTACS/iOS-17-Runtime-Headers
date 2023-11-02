
@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _tekTravelerDownloadBaseURL;
    NSURL * _tekTravelerDownloadIndexURL;
}

@property (nonatomic, readonly, copy) NSURL *tekTravelerDownloadBaseURL;
@property (nonatomic, readonly, copy) NSURL *tekTravelerDownloadIndexURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)tekTravelerDownloadBaseURL;
- (id)tekTravelerDownloadIndexURL;

@end
