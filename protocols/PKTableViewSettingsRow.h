
@protocol PKTableViewSettingsRow <PKTableViewCellProviding, PKIdentifiable>

@required

- (id /* block */)changeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL
- (bool)isEnabled;
- (void)setChangeHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setValue:(id)arg1;
- (NSString *)title;
- (id)value;

@end
