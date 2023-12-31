
@interface MBBackgroundRestoreInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _bytesRemaining;
    int  _dataClassesRemaining;
    NSArray * _failedDomains;
}

@property unsigned long long bytesRemaining;
@property int dataClassesRemaining;
@property (retain) NSArray *failedDomains;

+ (bool)supportsSecureCoding;

- (unsigned long long)bytesRemaining;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataClassesRemaining;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)failedDomains;
- (id)initWithCoder:(id)arg1;
- (void)setBytesRemaining:(unsigned long long)arg1;
- (void)setDataClassesRemaining:(int)arg1;
- (void)setFailedDomains:(id)arg1;

@end
