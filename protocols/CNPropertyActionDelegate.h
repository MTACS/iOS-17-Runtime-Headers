
@protocol CNPropertyActionDelegate <CNContactActionDelegate>

@required

- (CNPropertyCell *)action:(CNContactAction *)arg1 cellForPropertyItem:(CNPropertyGroupItem *)arg2 sender:(id)arg3;

@end
