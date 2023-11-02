
@interface SearchUICollectionViewRestorationContext : NSObject <NSSecureCoding> {
    NSIndexPath * _lastSelectedIndexPath;
}

@property (retain) NSIndexPath *lastSelectedIndexPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastSelectedIndexPath;
- (void)setLastSelectedIndexPath:(id)arg1;

@end
