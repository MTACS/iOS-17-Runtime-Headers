
@protocol UIEditable <NSObject>

@required

- (bool)canBeEdited;
- (bool)isEditing;
- (void)setEditing:(bool)arg1;

@end
