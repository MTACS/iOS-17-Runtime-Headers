
@interface TLTimelineBlobEntry : NSObject <TLTimelineEntry> {
    NSData * _blob;
    NSDate * _tl_entryDate;
}

@property (nonatomic, readonly) NSData *blob;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (setter=tl_setEntryDate:, nonatomic, retain) NSDate *tl_entryDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blob;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlob:(id)arg1 atDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)tl_entryDate;
- (void)tl_setEntryDate:(id)arg1;
- (bool)tl_validate:(id*)arg1;

@end
