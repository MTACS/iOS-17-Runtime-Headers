
@protocol _SFPBPerformContactActionCommand <NSObject>

@required

- (int)contactActionType;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;

@end
