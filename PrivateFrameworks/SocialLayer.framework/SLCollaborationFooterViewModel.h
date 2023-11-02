
@interface SLCollaborationFooterViewModel : NSObject <NSCopying, NSSecureCoding> {
    CKContainerSetupInfo * _containerSetupInfo;
    NSURL * _fileURL;
    bool  _isShareLink;
    _SWCollaborationMetadata * _metadata;
    NSString * _optionsSummary;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) bool isShareLink;
@property (nonatomic, readonly) _SWCollaborationMetadata *metadata;
@property (nonatomic, copy) NSString *optionsSummary;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerSetupInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerSetupInfo:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isShareLink;
- (id)metadata;
- (id)optionsSummary;
- (void)setIsShareLink:(bool)arg1;
- (void)setOptionsSummary:(id)arg1;
- (id)subtitle;
- (id)title;
- (long long)type;

@end
