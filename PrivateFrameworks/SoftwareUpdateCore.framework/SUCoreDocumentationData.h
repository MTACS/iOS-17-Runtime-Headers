
@interface SUCoreDocumentationData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _humanReadableUpdateName;
    NSString * _humanReadableUpdateTitle;
    NSString * _humanReadableUpdateVersion;
    NSData * _license;
    NSData * _readme;
    NSData * _readmeSummary;
}

@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSString *humanReadableUpdateTitle;
@property (nonatomic, retain) NSString *humanReadableUpdateVersion;
@property (nonatomic, retain) NSData *license;
@property (nonatomic, retain) NSData *readme;
@property (nonatomic, retain) NSData *readmeSummary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableUpdateName;
- (id)humanReadableUpdateTitle;
- (id)humanReadableUpdateVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationDataDictionary:(id)arg1;
- (id)license;
- (id)readme;
- (id)readmeSummary;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setHumanReadableUpdateTitle:(id)arg1;
- (void)setHumanReadableUpdateVersion:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)setReadme:(id)arg1;
- (void)setReadmeSummary:(id)arg1;
- (id)summary;

@end
