
@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {
    bool  _applyFilter;
    unsigned short  _bucketCount;
    unsigned int  _count;
    struct { double x1; unsigned int x2; unsigned short x3; } * _entries;
}

@property (nonatomic, readonly) bool applyFilter;
@property (nonatomic, readonly) unsigned short pointsPerTimeInterval;

+ (bool)supportsSecureCoding;

- (bool)applyFilter;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerate:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)pointsPerTimeInterval;

@end
