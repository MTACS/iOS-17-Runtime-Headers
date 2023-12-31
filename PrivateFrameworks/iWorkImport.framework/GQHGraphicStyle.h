
@interface GQHGraphicStyle : GQHTextBox

+ (void)mapExternalWrap:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapFill:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStroke:(id)arg1 toBorderType:(int)arg2 style:(id)arg3 state:(id)arg4;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 suppressNullFillOverride:(bool)arg4;
+ (const char *)name;
+ (int)strokeWidth:(id)arg1;

@end
