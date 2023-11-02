
@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _classificationName;
    NSURL * _classificationURL;
    NSString * _localizedExposureDetailBody;
    NSString * _localizedNotificationBody;
    NSString * _localizedNotificationSubject;
}

@property (nonatomic, readonly, copy) NSString *classificationName;
@property (nonatomic, readonly, copy) NSURL *classificationURL;
@property (nonatomic, readonly, copy) NSString *localizedExposureDetailBody;
@property (nonatomic, readonly, copy) NSString *localizedNotificationBody;
@property (nonatomic, readonly, copy) NSString *localizedNotificationSubject;

+ (bool)getNotificationConfiguration:(id*)arg1 fromDictionary:(id)arg2 locale:(id)arg3 index:(unsigned char)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classificationName;
- (id)classificationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedExposureDetailBody;
- (id)localizedNotificationBody;
- (id)localizedNotificationSubject;

@end
