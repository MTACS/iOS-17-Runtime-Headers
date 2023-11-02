
@interface MTRClusterTestCluster : MTRClusterUnitTesting

- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (void)simpleStructEchoRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testAddArgumentsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testComplexNullableOptionalRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testEmitTestEventRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testEmitTestFabricScopedEventRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testEnumsRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testListInt8UArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testListInt8UReverseRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testListNestedStructListArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testListStructArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testNestedStructArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testNestedStructListArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testNotHandledWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)testNotHandledWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testNullableOptionalRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testSimpleArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testSimpleOptionalArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testSpecificWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)testSpecificWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testStructArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testStructArrayArgumentRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testUnknownCommandWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)testUnknownCommandWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)testWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)testWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)timedInvokeRequestWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)timedInvokeRequestWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
