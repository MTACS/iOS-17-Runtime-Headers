
@interface SmartReplies.SRSmartRepliesActionMetadata : NSObject <NSCopying, NSSecureCoding> {
    void attribution;
    void attributionSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void hasRichActionType;
    void imageName;
    void locationLatitude;
    void locationLongitude;
    void stringRepresentation;
    void title;
    void type;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) long long attributionSource;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool hasRichActionType;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) double locationLatitude;
@property (nonatomic, readonly) double locationLongitude;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attribution;
- (long long)attributionSource;
- (id)copyWithZone:(void*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRichActionType;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 title:(id)arg2 attribution:(id)arg3 stringRepresentation:(id)arg4 date:(id)arg5 hasRichActionType:(bool)arg6 url:(id)arg7 locationLatitude:(double)arg8 locationLongitude:(double)arg9 imageName:(id)arg10 attributionSource:(long long)arg11;
- (bool)isEqual:(id)arg1;
- (double)locationLatitude;
- (double)locationLongitude;
- (id)stringRepresentation;
- (id)title;
- (long long)type;
- (id)url;

@end
