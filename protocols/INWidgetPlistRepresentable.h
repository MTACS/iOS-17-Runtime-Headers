
@protocol INWidgetPlistRepresentable

@required

+ (id)makeFromWidgetPlistableRepresentation:(NSDictionary *)arg1 error:(id*)arg2;

- (NSDictionary *)widgetPlistableRepresentationWithParameters:(INWidgetPlistRepresentableEncodingParameters *)arg1 error:(id*)arg2;

@end
