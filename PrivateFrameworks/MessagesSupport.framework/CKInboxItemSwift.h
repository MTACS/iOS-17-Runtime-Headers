
@interface CKInboxItemSwift : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _accessoryText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void subtitle;
    void systemImage;
    void title;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 systemImage:(id)arg4 accessoryText:(id)arg5;
- (void)updateWithAccessoryText:(id)arg1;

@end
