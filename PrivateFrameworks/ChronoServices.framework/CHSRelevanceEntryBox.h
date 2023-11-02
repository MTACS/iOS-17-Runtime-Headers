
@interface CHSRelevanceEntryBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData * _archivedData;
    NSDictionary * _timelineRelevanceEntries;
}

@property (nonatomic, copy) NSDictionary *timelineRelevanceEntries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)prepareForEncoding;
- (void)setTimelineRelevanceEntries:(id)arg1;
- (id)timelineRelevanceEntries;

@end
