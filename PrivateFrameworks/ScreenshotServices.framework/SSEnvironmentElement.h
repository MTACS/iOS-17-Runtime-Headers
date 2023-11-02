
@interface SSEnvironmentElement : NSObject <BSXPCSecureCoding, NSCopying, SSLoggable> {
    NSString * _bundleIdentifier;
    SSHarvestedApplicationDocument * _document;
    NSString * _elementIdentifier;
    bool  _hasKeyboardFocus;
    NSString * _identifier;
    SSHarvestedApplicationMetadata * _metadata;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSHarvestedApplicationDocument *document;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) bool hasKeyboardFocus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAppLauncher;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (nonatomic, retain) SSHarvestedApplicationMetadata *metadata;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMetadataCapture;

+ (id)_metadataIdentifierBlocklist;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)document;
- (id)elementIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (bool)hasKeyboardFocus;
- (id)identifier;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithDisplayLayoutElement:(id)arg1;
- (bool)isAppLauncher;
- (id)loggableDescription;
- (id)metadata;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setDocument:(id)arg1;
- (void)setMetadata:(id)arg1;
- (bool)supportsMetadataCapture;

@end
