
@interface DMCProfilePayloadSection : NSObject <NSSecureCoding> {
    NSMutableArray * _payloadViewModels;
    NSString * _sectionFooter;
    NSString * _sectionTitle;
}

@property (nonatomic, retain) NSMutableArray *payloadViewModels;
@property (nonatomic, retain) NSString *sectionFooter;
@property (nonatomic, retain) NSString *sectionTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadViewModels:(id)arg3;
- (id)payloadViewModels;
- (id)sectionFooter;
- (id)sectionTitle;
- (void)setPayloadViewModels:(id)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionTitle:(id)arg1;

@end
