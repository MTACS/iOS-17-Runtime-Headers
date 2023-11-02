
@interface WLMessageSMILPart : NSObject {
    NSDictionary * _attributes;
    NSString * _elementName;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *elementName;

- (void).cxx_destruct;
- (id)attributes;
- (id)elementName;
- (id)fileName;
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;

@end
