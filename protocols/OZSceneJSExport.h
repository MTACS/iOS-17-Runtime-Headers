
@protocol OZSceneJSExport <JSExport>

@required

- (OZJS3DElement *)get3DElementWithID:(unsigned int)arg1;
- (OZJS3DElement *)get3DElementWithName:(NSString *)arg1;
- (OZJSElement *)getElementWithID:(unsigned int)arg1;

@end
