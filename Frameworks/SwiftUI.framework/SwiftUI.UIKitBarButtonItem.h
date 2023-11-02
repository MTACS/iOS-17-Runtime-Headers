
@interface SwiftUI.UIKitBarButtonItem : UIBarButtonItem {
    void edge;
    void host;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  item;
    void listView;
    void menuDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  platformItem;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)performAction:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end
