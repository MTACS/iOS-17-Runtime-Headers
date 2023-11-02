
@protocol GCHIDElementAttributes

@required

- (int)collectionType;
- (unsigned int)elementCookie;
- (unsigned int)flags;
- (unsigned char)hasNullState;
- (unsigned char)hasPreferredState;
- (unsigned char)isArray;
- (unsigned char)isNonLinear;
- (unsigned char)isRelative;
- (unsigned char)isWrapping;
- (long long)max;
- (long long)min;
- (NSString *)name;
- (unsigned int)reportCount;
- (long long)reportID;
- (long long)reportSize;
- (long long)scaledMax;
- (long long)scaledMin;
- (long long)size;
- (int)type;
- (long long)unit;
- (long long)unitExponent;
- (long long)usage;
- (long long)usagePage;
- (long long)usageType;
- (long long)usageTypeIndex;
- (id)valueForElementKey:(NSString *)arg1;

@end
