
@interface _WKModalContainerInfo : NSObject {
    unsigned long long  _availableTypes;
}

@property (nonatomic, readonly) unsigned long long availableTypes;

- (unsigned long long)availableTypes;
- (id)initWithTypes:(struct OptionSet<WebCore::ModalContainerControlType> { unsigned char x1; })arg1;

@end
