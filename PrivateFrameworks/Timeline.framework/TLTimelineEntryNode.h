
@interface TLTimelineEntryNode : TLTimelineNode {
    <TLTimelineEntry> * _entry;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, retain) <TLTimelineEntry> *entry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leftEntryNode;
- (id)rightEntryNode;
- (void)setEntry:(id)arg1;

@end
