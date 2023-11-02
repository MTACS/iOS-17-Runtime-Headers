
@interface MSVLyricsXMLElement : NSObject {
    NSString * _elementName;
    NSString * _identifier;
    NSMutableString * _mutableText;
}

@property (nonatomic, copy) NSString *elementName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSMutableString *mutableText;

- (void).cxx_destruct;
- (id)description;
- (id)elementName;
- (id)identifier;
- (id)mutableText;
- (void)setElementName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutableText:(id)arg1;

@end
