
@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding> {
    id  _anchor;
}

@property (nonatomic, readonly) id anchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptBoolItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)acceptItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
