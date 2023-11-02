
@interface PKPrintSettings : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _dict;
    PKPaper * _paper;
}

@property (copy) PKPaper *paper;

+ (id)default;
+ (id)photo;
+ (id)printSettingsForPrinter:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCopies;
- (id)getDuplex;
- (id)getJobName;
- (id)getOutputMode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaper:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)paper;
- (void)removeObjectForKey:(id)arg1;
- (void)setCopies:(id)arg1;
- (void)setDuplex:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setFinishingTemplate:(id)arg1;
- (void)setFinishings:(id)arg1;
- (void)setJobName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOrientation:(id)arg1;
- (void)setOutputMode:(id)arg1;
- (void)setPWGPaperName:(id)arg1;
- (void)setPaper:(id)arg1;
- (void)setQuality:(id)arg1;

@end
