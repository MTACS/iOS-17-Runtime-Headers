
@interface RTSourceMapsSupportHistoryEntryRoute : RTSourceMapsSupportHistoryEntry {
    bool  _navigationWasInterrupted;
}

@property (nonatomic, readonly) bool navigationWasInterrupted;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsageDate:(id)arg1 navigationWasInterrupted:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)navigationWasInterrupted;

@end
