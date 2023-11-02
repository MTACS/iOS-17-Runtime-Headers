
@interface PXMetadataDisplayItem : NSObject {
    NSString * _accessibilityDescription;
    NSString * _accessibilityIdentifier;
    NSString * _accessibilityValue;
    NSString * _accessoryImageSystemName;
    id  _content;
}

@property (nonatomic, retain) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *accessibilityValue;
@property (nonatomic, readonly) NSString *accessoryImageSystemName;
@property (nonatomic, retain) id content;
@property (getter=isEmpty, readonly) bool empty;

+ (id)emptyItem;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)accessoryImageSystemName;
- (id)content;
- (id)init;
- (id)initWithContent:(id)arg1 accessibilityDescription:(id)arg2 accessibilityValue:(id)arg3 accessibilityIdentifier:(id)arg4 accessoryImageSystemName:(id)arg5;
- (bool)isEmpty;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setContent:(id)arg1;

@end
