
@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)processDialogFromPropertyList:(id)arg1 returningError:(id*)arg2;
- (bool)processPropertyList:(id)arg1 returningError:(id*)arg2;

@end
