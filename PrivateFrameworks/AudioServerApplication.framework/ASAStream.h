
@interface ASAStream : ASAObject

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSArray *availablePhysicalFormats;
@property (nonatomic, readonly, copy) NSArray *availableVirtualFormats;
@property (nonatomic, readonly, copy) NSArray *controlObjectIDs;
@property (nonatomic, readonly, copy) NSArray *controls;
@property (getter=isInput, nonatomic, readonly) bool input;
@property (nonatomic, readonly) unsigned int latency;
@property (nonatomic, copy) NSString *name;
@property (getter=isOutput, nonatomic, readonly) bool output;
@property (nonatomic, copy) ASAAudioFormat *physicalFormat;
@property (getter=isPhysicalFormatSettable, nonatomic, readonly) bool physicalFormatSettable;
@property (nonatomic, readonly) unsigned int startingChannel;
@property (getter=isTapStream, nonatomic, readonly) bool tapStream;
@property (nonatomic, readonly) unsigned int terminalType;
@property (nonatomic, copy) ASAAudioFormat *virtualFormat;
@property (getter=isVirtualFormatSettable, nonatomic, readonly) bool virtualFormatSettable;

- (id)availablePhysicalFormats;
- (id)availableVirtualFormats;
- (id)controlObjectIDs;
- (id)controls;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (bool)isActive;
- (bool)isInput;
- (bool)isOutput;
- (bool)isPhysicalFormatSettable;
- (bool)isTapStream;
- (bool)isVirtualFormatSettable;
- (unsigned int)latency;
- (id)name;
- (id)physicalFormat;
- (void)setName:(id)arg1;
- (void)setPhysicalFormat:(id)arg1;
- (void)setVirtualFormat:(id)arg1;
- (unsigned int)startingChannel;
- (unsigned int)terminalType;
- (id)virtualFormat;

@end
