
@interface WFAppIntentShortcutsMetadata : NSObject {
    void additions;
    void category;
    void discoverable;
    void displayedAppDescriptor;
    void iconSymbol;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subcategory;
}

@property (nonatomic, retain) INAppDescriptor *displayedAppDescriptor;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)displayedAppDescriptor;
- (id)init;
- (void)setDisplayedAppDescriptor:(id)arg1;

@end
