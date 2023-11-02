
@interface WFAddToMediaLibraryContextualAction : WFContextualAction {
    WFContextualActionMediaItemDescriptor * _mediaItemDescriptor;
}

@property (nonatomic, readonly) WFContextualActionMediaItemDescriptor *mediaItemDescriptor;
@property (nonatomic, readonly) bool selfPopulatesInput;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItemDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaItemDescriptor;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)getInputWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 26: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)selfPopulatesInput;

@end
