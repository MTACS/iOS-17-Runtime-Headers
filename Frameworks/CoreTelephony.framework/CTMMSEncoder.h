
@interface CTMMSEncoder : NSObject

+ (id)decodeMessageFromData:(id)arg1;
+ (id)decodeMessageFromData:(id)arg1 data:(id)arg2;
+ (id)decodeSmsFromData:(id)arg1;
+ (id)decodeSmsFromData:(id)arg1 data:(id)arg2;
+ (id)encodeMessage:(id)arg1;
+ (id)encodeSms:(id)arg1;

@end
