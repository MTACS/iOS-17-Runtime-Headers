
@protocol SFPerformContactActionCommand <SFCommand>

@required

- (int)contactActionType;
- (NSDictionary *)dictionaryRepresentation;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (NSData *)jsonData;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;

@end
