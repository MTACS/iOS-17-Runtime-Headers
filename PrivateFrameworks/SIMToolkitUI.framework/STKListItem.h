
@interface STKListItem : NSObject <BSXPCCoding> {
    bool  _selected;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelected;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 selected:(bool)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isSelected;
- (id)text;

@end
