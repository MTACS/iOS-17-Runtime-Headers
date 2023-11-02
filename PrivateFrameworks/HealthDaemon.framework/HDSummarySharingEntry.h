
@interface HDSummarySharingEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _CNContactIdentifier;
    HDCodableSummarySharingEntry * _codableEntry;
    bool  _isPaused;
}

@property (nonatomic, readonly, copy) NSString *CNContactIdentifier;
@property (nonatomic, readonly) HDCodableSummarySharingEntry *codableEntry;
@property (nonatomic, readonly) bool isPaused;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CNContactIdentifier;
- (id)codableEntry;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodableEntry:(id)arg1 CNContactIdentifier:(id)arg2 isPaused:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPaused;
- (id)sharingEntry;

@end
