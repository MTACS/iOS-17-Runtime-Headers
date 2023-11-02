
@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse> {
    UIColor * _extractedBackgroundColor;
    bool  _generated;
    UIImage * _touchIcon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *extractedBackgroundColor;
@property (getter=isGenerated, nonatomic, readonly) bool generated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *icon;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(bool)arg3 extractedBackgroundColor:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)extractedBackgroundColor;
- (id)icon;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(bool)arg3 extractedBackgroundColor:(id)arg4;
- (bool)isGenerated;
- (id)touchIcon;

@end
