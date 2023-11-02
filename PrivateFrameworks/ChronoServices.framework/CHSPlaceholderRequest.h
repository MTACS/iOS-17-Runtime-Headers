
@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding> {
    long long  _family;
    NSFileHandle * _fileHandle;
    CHSWidgetMetrics * _metrics;
}

@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, readonly) CHSWidgetMetrics *metrics;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (id)fileHandle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1 family:(long long)arg2 fileHandle:(id)arg3;
- (id)metrics;

@end
