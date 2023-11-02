
@interface _HDSyncAnchorRangeBox : NSObject <NSCopying, NSSecureCoding> {
    struct HDSyncAnchorRange { 
        long long start; 
        long long end; 
    }  _anchorRange;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
